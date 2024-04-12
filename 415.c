void fun()
{
  int entity_8 = 73;
  char* entity_6;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_1, 's', entity_8-1);
  entity_1[entity_8-1]='';
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  entity_6 = (char*)malloc(28*sizeof(char));
  entity_6[28-1]='';
  entity_1[31] = 'c';
}