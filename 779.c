void fun()
{
  int entity_0 = 21;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_5;
  memset(entity_7, 'j', entity_0-1);
  entity_7[entity_0-1]='';
  entity_5 = (char*)malloc(94*sizeof(char));
  entity_5[94-1]='';
  entity_7[94] = 'X';
}