void fun()
{
  char entity_2[70] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_7[54] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(68*sizeof(char));
  entity_4[68-1]='';
  memset(entity_2, 'B', 70-1);
  entity_2[70-1]='';
  memset(entity_7, 'D', 54-1);
  entity_7[54-1]='';
  memcpy(entity_4, entity_2, 70*sizeof(char));
}