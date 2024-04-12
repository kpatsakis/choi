void fun()
{
  int entity_1 = 2;
  int entity_2 = 6;
  char entity_6[11] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'C', 11-1);
  entity_6[11-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memcpy(entity_8, entity_6, 11*sizeof(char));
}