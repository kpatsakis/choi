void fun()
{
  int entity_2 = 16;
  char entity_4 = 'a';
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_7;
  char entity_1 = 'f';
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  memset(entity_5, 'l', entity_2-1);
  entity_5[entity_2-1]='';
  entity_2 = 79;
  entity_5[56] = 'v';
}