void fun()
{
  char* entity_9;
  char entity_5 = 'w';
  char entity_2[62] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(37*sizeof(char));
  entity_9[37-1]='';
  memset(entity_2, 'f', 62-1);
  entity_2[62-1]='';
  memcpy(entity_9, entity_2, 62*sizeof(char));
}