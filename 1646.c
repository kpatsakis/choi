void fun()
{
  int entity_7 = 60;
  char entity_6 = 't';
  char entity_8 = 'F';
  char* entity_3;
  char entity_9[43] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(40*sizeof(char));
  entity_3[40-1]='';
  memset(entity_9, 'Z', 43-1);
  entity_9[43-1]='';
  memcpy(entity_3, entity_9, 43*sizeof(char));
}