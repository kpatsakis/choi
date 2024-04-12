void fun()
{
  int entity_1 = 25;
  char* entity_5;
  char entity_4[71] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[28-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_4, 'h', 71-1);
  entity_4[71-1]='';
  strcpy(entity_2, entity_4);
}