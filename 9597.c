void fun()
{
  char entity_9[21] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_9, 'u', 21-1);
  entity_9[21-1]='';
  entity_2 = (char*)malloc(74*sizeof(char));
  entity_2[74-1]='';
  memcpy(entity_2, entity_9, 21*sizeof(char));
}