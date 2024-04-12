void fun()
{
  int entity_9 = 53;
  entity_9 = 28;
  char* entity_3;
  char entity_4[60] = "";
  char* entity_2;
  char* entity_0;
  entity_3 = (char*)malloc(47*sizeof(char));
  entity_3[0]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  entity_0 = (char*)malloc(14*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'I', 60-1);
  entity_4[60-1]='0';
  strcpy(entity_2, entity_4);
}