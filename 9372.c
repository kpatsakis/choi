void fun()
{
  int entity_1 = 59;
  entity_1 = 59;
  char entity_4 = 'v';
  char entity_7 = 'P';
  char entity_0 = 'G';
  char* entity_2;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  memset(entity_8, 'e', entity_1-1);
  entity_8[entity_1-1]='';
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  strcpy(entity_2, entity_8);
}