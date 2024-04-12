void fun()
{
  int entity_2 = 79;
  char entity_1[82] = "";
  entity_1 = NULL;
  char* entity_6;
  char entity_5 = 'B';
  char* entity_0;
  entity_6 = (char*)malloc(23*sizeof(char));
  entity_6[23-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_1, 'D', 82-1);
  entity_1[82-1]='';
  entity_2 = 80;
  strcpy(entity_0, entity_1);
}