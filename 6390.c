void fun()
{
  char* entity_2;
  char* entity_1;
  char entity_5[15] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[16-1]='';
  memset(entity_5, 'J', 15-1);
  entity_5[15-1]='';
  entity_2 = (char*)malloc(100*sizeof(char));
  entity_2[100-1]='';
  entity_1 = (char*)malloc(55*sizeof(char));
  entity_1[55-1]='';
  memcpy(entity_2, entity_5, 15*sizeof(char));
}