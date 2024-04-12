void fun()
{
  char* entity_6;
  char entity_9[92] = "";
  entity_9 = NULL;
  memset(entity_9, 'G', 92-1);
  entity_9[92-1]='';
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  memcpy(entity_6, entity_9, 92*sizeof(char));
}