void fun()
{
  char entity_7[25] = "";
  entity_7 = NULL;
  char* entity_8;
  char* entity_3;
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[24-1]='';
  memset(entity_7, 'O', 25-1);
  entity_7[25-1]='';
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[68-1]='';
  memcpy(entity_8, entity_7, 25*sizeof(char));
}