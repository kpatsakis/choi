void fun()
{
  int entity_3 = 78;
  entity_3 = 10;
  char* entity_4;
  char* entity_8;
  char entity_2[98] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[66-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_2, 'w', 98-1);
  entity_2[98-1]='';
  memcpy(entity_8, entity_2, 98*sizeof(char));
}