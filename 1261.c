void fun()
{
  char entity_5 = 'm';
  char entity_0[26] = "";
  entity_0 = NULL;
  char entity_7[30] = "";
  entity_7 = NULL;
  char* entity_2;
  char* entity_8;
  entity_8 = (char*)malloc(92*sizeof(char));
  entity_8[92-1]='';
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[88-1]='';
  memset(entity_7, 'V', 30-1);
  entity_7[30-1]='';
  memset(entity_0, 'N', 26-1);
  entity_0[26-1]='';
  strcpy(entity_2, entity_7);
}