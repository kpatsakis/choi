void fun()
{
  int entity_1 = 98;
  char* entity_8;
  char entity_6[57] = "";
  entity_6 = NULL;
  memset(entity_6, 'D', 57-1);
  entity_6[57-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memcpy(entity_8, entity_6, 57*sizeof(char));
}