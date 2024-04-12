void fun()
{
  int entity_4 = 69;
  int entity_2 = 50;
  char entity_3 = 'b';
  char* entity_1;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  memset(entity_6, 'j', entity_4-1);
  entity_6[entity_4-1]='';
  entity_1 = (char*)malloc(10*sizeof(char));
  entity_1[10-1]='';
  entity_4 = 92;
  strcpy(entity_1, entity_6);
}