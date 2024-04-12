void fun()
{
  char entity_5[75] = "";
  entity_5 = NULL;
  char* entity_9;
  char* entity_8;
  char entity_3 = 'g';
  memset(entity_5, 'L', 75-1);
  entity_5[75-1]='';
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[41-1]='';
  entity_8 = (char*)malloc(9*sizeof(char));
  entity_8[9-1]='';
  memcpy(entity_9, entity_5, 75*sizeof(char));
}