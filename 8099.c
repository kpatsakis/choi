void fun()
{
  char* entity_2;
  char entity_9[16] = "";
  entity_9 = NULL;
  memset(entity_9, 'o', 16-1);
  entity_9[16-1]='';
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[83-1]='';
  memcpy(entity_2, entity_9, 16*sizeof(char));
}