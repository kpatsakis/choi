void fun()
{
  int entity_5 = 55;
  char* entity_1;
  char* entity_7;
  char entity_3[56] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  entity_7 = (char*)malloc(62*sizeof(char));
  entity_7[62-1]='';
  memset(entity_3, 'l', 56-1);
  entity_3[56-1]='';
  entity_5 = 17;
  memcpy(entity_1, entity_3, 56*sizeof(char));
}