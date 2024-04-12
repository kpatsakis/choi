void fun()
{
  int entity_3 = 40;
  char entity_7[75] = "";
  entity_7 = NULL;
  char entity_2[61] = "";
  entity_2 = NULL;
  char* entity_6;
  memset(entity_7, 'C', 75-1);
  entity_7[75-1]='';
  memset(entity_2, 'v', 61-1);
  entity_2[61-1]='';
  entity_6 = (char*)malloc(10*sizeof(char));
  entity_6[10-1]='';
  strcpy(entity_6, entity_2);
}