void fun()
{
  int entity_1 = 100;
  int entity_6 = 32;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[85-1]='';
  memset(entity_4, 'J', entity_1-1);
  entity_4[entity_1-1]='';
  entity_4[90] = 'c';
}