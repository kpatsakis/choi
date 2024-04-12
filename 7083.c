void fun()
{
  int entity_1 = 68;
  int entity_0 = 10;
  int entity_2 = 55;
  char entity_7[1] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memset(entity_7, 'u', 1-1);
  entity_7[1-1]='';
  entity_2 = 60;
  strcpy(entity_3, entity_7);
}