void fun()
{
  int entity_5 = 59;
  entity_5 = 73;
  char entity_2 = 'A';
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'K', entity_5-1);
  entity_7[entity_5-1]='';
  entity_1 = (char*)malloc(33*sizeof(char));
  entity_1[33-1]='';
  entity_7[50] = 'u';
}