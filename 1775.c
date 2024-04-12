void fun()
{
  int entity_0 = 81;
  char entity_1[10] = "";
  entity_1 = NULL;
  char entity_3 = 'h';
  char* entity_6;
  memset(entity_1, 'k', 10-1);
  entity_1[10-1]='';
  entity_6 = (char*)malloc(33*sizeof(char));
  entity_6[33-1]='';
  entity_1[entity_0] = 'h';
}