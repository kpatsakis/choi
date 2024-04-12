void fun()
{
  int entity_1 = 37;
  int entity_8 = 85;
  int entity_5 = 16;
  entity_8 = 21;
  char entity_2[37] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_0 = 'U';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_2, 'D', 37-1);
  entity_2[37-1]='';
  strcpy(entity_3, entity_2);
}