void fun()
{
  int entity_0 = 65;
  char entity_4 = 'C';
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(8*sizeof(char));
  entity_8[8-1]='';
  memset(entity_7, 'm', entity_0-1);
  entity_7[entity_0-1]='';
  entity_7[73] = 'W';
}