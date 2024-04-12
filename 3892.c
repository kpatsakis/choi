void fun()
{
  char entity_5[68] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'H', 68-1);
  entity_5[68-1]='';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[56-1]='';
  memcpy(entity_7, entity_5, 68*sizeof(char));
}