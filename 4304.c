void fun()
{
  char entity_2 = 'F';
  char entity_0[35] = "";
  entity_0 = NULL;
  char* entity_7;
  char entity_9[92] = "";
  entity_9 = NULL;
  memset(entity_9, 'U', 92-1);
  entity_9[92-1]='';
  entity_7 = (char*)malloc(25*sizeof(char));
  entity_7[25-1]='';
  memset(entity_0, 'G', 35-1);
  entity_0[35-1]='';
  memcpy(entity_7, entity_0, 35*sizeof(char));
}