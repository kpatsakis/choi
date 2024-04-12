void fun()
{
  int entity_4 = 37;
  char* entity_8;
  char* entity_1;
  char entity_2[28] = "";
  entity_2 = NULL;
  memset(entity_2, 'Y', 28-1);
  entity_2[28-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  entity_8 = (char*)malloc(88*sizeof(char));
  entity_8[88-1]='';
  strcpy(entity_1, entity_2);
}