void fun()
{
  int entity_8 = 19;
  int entity_9 = 47;
  char* entity_2;
  char* entity_5;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[44-1]='';
  entity_5 = (char*)malloc(72*sizeof(char));
  entity_5[72-1]='';
  memset(entity_6, 'A', entity_8-1);
  entity_6[entity_8-1]='';
  entity_6[87] = 'Y';
}