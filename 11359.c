void fun()
{
  char* entity_9;
  char entity_6[75] = "";
  char* entity_3;
  char entity_1[94] = "";
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'M', 94-1);
  entity_1[94-1]='0';
  entity_3 = (char*)malloc(54*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'd', 75-1);
  entity_6[75-1]='0';
  memcpy(entity_3, entity_1, 94*sizeof(char));
}