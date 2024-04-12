void fun()
{
  int entity_5 = 57;
  char* entity_4;
  char entity_1 = 'x';
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'b', entity_5-1);
  entity_2[entity_5-1]='';
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[66-1]='';
  entity_2[3] = 'Y';
}