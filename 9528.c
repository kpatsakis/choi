void fun()
{
  int entity_3 = 32;
  int entity_6 = 62;
  char entity_2[43] = "";
  entity_2 = NULL;
  char* entity_9;
  char* entity_4;
  memset(entity_2, 'a', 43-1);
  entity_2[43-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[38-1]='';
  entity_3 = 30;
  memcpy(entity_4, entity_2, 43*sizeof(char));
}