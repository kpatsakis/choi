void fun()
{
  char* entity_9;
  char* entity_2;
  char entity_0[3] = "";
  entity_0 = NULL;
  char entity_6[70] = "";
  entity_6 = NULL;
  memset(entity_6, 'L', 70-1);
  entity_6[70-1]='';
  entity_9 = (char*)malloc(95*sizeof(char));
  entity_9[95-1]='';
  entity_2 = (char*)malloc(86*sizeof(char));
  entity_2[86-1]='';
  memset(entity_0, 'D', 3-1);
  entity_0[3-1]='';
  memcpy(entity_9, entity_0, 3*sizeof(char));
}