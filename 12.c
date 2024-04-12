void fun()
{
  int entity_2 = 57;
  int entity_1 = 96;
  char entity_8[24] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_8, 's', 24-1);
  entity_8[24-1]='';
  memcpy(entity_4, entity_8, 24*sizeof(char));
}