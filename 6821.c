void fun()
{
  int entity_9 = 11;
  char entity_0 = 'j';
  char* entity_5;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(11*sizeof(char));
  entity_8[11-1]='';
  memset(entity_7, 'Q', entity_9-1);
  entity_7[entity_9-1]='';
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[42-1]='';
  entity_7[94] = 'W';
}