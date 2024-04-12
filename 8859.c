void fun()
{
  char entity_9[26] = "";
  entity_9 = NULL;
  char entity_7[68] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_4[75] = "";
  entity_4 = NULL;
  memset(entity_4, 'k', 75-1);
  entity_4[75-1]='';
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[21-1]='';
  memset(entity_9, 'C', 26-1);
  entity_9[26-1]='';
  memset(entity_7, 'v', 68-1);
  entity_7[68-1]='';
  memcpy(entity_3, entity_7, 68*sizeof(char));
}