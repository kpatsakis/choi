void fun()
{
  int entity_1 = 44;
  char entity_6 = 'p';
  char entity_5[10] = "";
  entity_5 = NULL;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(62*sizeof(char));
  entity_9[62-1]='';
  memset(entity_5, 'z', 10-1);
  entity_5[10-1]='';
  memset(entity_4, 'j', entity_1-1);
  entity_4[entity_1-1]='';
  entity_4[26] = 'F';
}