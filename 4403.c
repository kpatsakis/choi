void fun()
{
  int entity_8 = 49;
  int entity_5 = 65;
  entity_8 = 78;
  char entity_4[17] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'b', 17-1);
  entity_4[17-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memcpy(entity_7, entity_4, 17*sizeof(char));
}