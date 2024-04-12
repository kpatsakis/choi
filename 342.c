void fun()
{
  int entity_0 = 11;
  char entity_1 = 't';
  char* entity_5;
  char entity_7[57] = "";
  entity_7 = NULL;
  memset(entity_7, 'c', 57-1);
  entity_7[57-1]='';
  entity_5 = (char*)malloc(70*sizeof(char));
  entity_5[70-1]='';
  entity_7[entity_0] = 'W';
}