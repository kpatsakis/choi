void fun()
{
  char* entity_8;
  char* entity_9;
  char* entity_5;
  char entity_0[48] = "";
  entity_0 = NULL;
  char entity_2[10] = "";
  entity_2 = NULL;
  memset(entity_2, 'M', 10-1);
  entity_2[10-1]='';
  entity_9 = (char*)malloc(10*sizeof(char));
  entity_9[10-1]='';
  entity_8 = (char*)malloc(78*sizeof(char));
  entity_8[78-1]='';
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  memset(entity_0, 'J', 48-1);
  entity_0[48-1]='';
  memcpy(entity_9, entity_0, 48*sizeof(char));
}