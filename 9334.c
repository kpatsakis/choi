void fun()
{
  char* entity_5;
  char entity_2 = 'g';
  char* entity_9;
  char* entity_8;
  char entity_0[5] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[20-1]='';
  entity_8 = (char*)malloc(15*sizeof(char));
  entity_8[15-1]='';
  entity_5 = (char*)malloc(84*sizeof(char));
  entity_5[84-1]='';
  memset(entity_0, 'o', 5-1);
  entity_0[5-1]='';
  strcpy(entity_9, entity_0);
}