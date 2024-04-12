void fun()
{
  char entity_5[49] = "";
  entity_5 = NULL;
  char* entity_4;
  char* entity_9;
  char entity_8 = 'k';
  entity_4 = (char*)malloc(62*sizeof(char));
  entity_4[62-1]='';
  entity_9 = (char*)malloc(25*sizeof(char));
  entity_9[25-1]='';
  memset(entity_5, 'Z', 49-1);
  entity_5[49-1]='';
  memcpy(entity_9, entity_5, 49*sizeof(char));
}