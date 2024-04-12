void fun()
{
  int entity_3 = 14;
  int entity_7 = 95;
  char* entity_4;
  char entity_6[16] = "";
  entity_6 = NULL;
  memset(entity_6, 's', 16-1);
  entity_6[16-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memcpy(entity_4, entity_6, 16*sizeof(char));
}