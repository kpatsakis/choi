void fun()
{
  int entity_4 = 23;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char* entity_7;
  char entity_2 = 'H';
  memset(entity_5, 'D', entity_4-1);
  entity_5[entity_4-1]='';
  entity_7 = (char*)malloc(95*sizeof(char));
  entity_7[95-1]='';
  entity_4 = 96;
  entity_5[100] = 'j';
}