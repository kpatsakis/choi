void fun()
{
  int entity_4 = 27;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char entity_2[68] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_0 = 'F';
  memset(entity_2, 'q', 68-1);
  entity_2[68-1]='';
  entity_1 = (char*)malloc(7*sizeof(char));
  entity_1[7-1]='';
  memset(entity_6, 'g', entity_4-1);
  entity_6[entity_4-1]='';
  entity_6[56] = 'v';
}