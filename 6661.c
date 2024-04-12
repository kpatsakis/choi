void fun()
{
  char* entity_3;
  char entity_2[65] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(13*sizeof(char));
  entity_9[13-1]='';
  memset(entity_2, 'c', 65-1);
  entity_2[65-1]='';
  entity_3 = (char*)malloc(32*sizeof(char));
  entity_3[32-1]='';
  memcpy(entity_3, entity_2, 65*sizeof(char));
}