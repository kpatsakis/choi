void fun()
{
  int entity_9 = 90;
  char* entity_6;
  char entity_3[56] = "";
  entity_3 = NULL;
  char entity_7[95] = "";
  entity_7 = NULL;
  memset(entity_7, 'v', 95-1);
  entity_7[95-1]='';
  entity_6 = (char*)malloc(49*sizeof(char));
  entity_6[49-1]='';
  memset(entity_3, 'd', 56-1);
  entity_3[56-1]='';
  memcpy(entity_6, entity_7, 95*sizeof(char));
}