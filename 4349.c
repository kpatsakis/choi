void fun()
{
  char entity_7[61] = "";
  entity_7 = NULL;
  char* entity_9;
  char* entity_4;
  char entity_6[61] = "";
  entity_6 = NULL;
  memset(entity_6, 'C', 61-1);
  entity_6[61-1]='';
  entity_4 = (char*)malloc(13*sizeof(char));
  entity_4[13-1]='';
  entity_9 = (char*)malloc(78*sizeof(char));
  entity_9[78-1]='';
  memset(entity_7, 'O', 61-1);
  entity_7[61-1]='';
  memcpy(entity_9, entity_7, 61*sizeof(char));
}