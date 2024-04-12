void fun()
{
  char entity_9[64] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'z', 64-1);
  entity_9[64-1]='';
  entity_5 = (char*)malloc(92*sizeof(char));
  entity_5[92-1]='';
  entity_9[37] = 'w';
}