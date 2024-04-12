void fun()
{
  int entity_0 = 25;
  char entity_1 = 'q';
  char* entity_4;
  char entity_2[43] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_2, 'G', 43-1);
  entity_2[43-1]='';
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  strcpy(entity_4, entity_2);
}