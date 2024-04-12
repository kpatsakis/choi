void fun()
{
  int entity_8 = 78;
  char* entity_3;
  char entity_4[37] = "";
  entity_4 = NULL;
  memset(entity_4, 'b', 37-1);
  entity_4[37-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memcpy(entity_3, entity_4, 37*sizeof(char));
}